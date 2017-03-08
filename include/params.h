//
// Created by AJ Pryor on 2/13/17.
//
#ifndef PRISM_PARAMS_H
#define PRISM_PARAMS_H
#include <vector>
#include <string>
#include <algorithm>
#include "ArrayND.h"
#include <complex>
#include "atom.h"
#include "meta.h"
//#include "configure.h"
namespace PRISM{
	template <class T>
	using Array1D = PRISM::ArrayND<1, std::vector<T> >;
	template <class T>
	using Array2D = PRISM::ArrayND<2, std::vector<T> >;
	template <class T>
	using Array3D = PRISM::ArrayND<3, std::vector<T> >;
	template <class T>
	using Array4D = PRISM::ArrayND<4, std::vector<T> >;

    template <class T>
    class Parameters {
    public:

	    Metadata<T> meta;
	    Array3D< std::complex<T>  > Scompact;
	    Array4D<T> stack;
		Array3D<T> pot;


	    Array2D< std::complex<T>  > prop;
	    Array2D< std::complex<T> > propBack;
//	    size_t interpolationFactor;
	    Array2D<unsigned int> qMask;
        Array1D<T> probeDefocusArray;
        Array1D<T> probeSemiangleArray;
        Array1D<T> probeXtiltArray;
        Array1D<T> probeYtiltArray;
	    Array2D<T> qxa;
	    Array2D<T> qya;
	    Array2D<T> qxaOutput;
	    Array2D<T> qyaOutput;
        Array2D<T> qxaReduce;
        Array2D<T> qyaReduce;
        Array1D<T> xp;
        Array1D<T> yp;
        std::vector<size_t> beamsIndex;
	    PRISM::ArrayND<2, std::vector<long> > xyBeams;
		Array2D<T> beams;
	    Array2D<T> beamsOutput;
        Array1D<T> xVec;
        Array1D<T> yVec;
        Array1D<T> detectorAngles;
	    Array1D<T> u;
	    std::vector<atom> atoms;
	    std::vector<T> pixelSize;
	    std::vector<T> pixelSizeOutput;
	    Array1D<size_t> imageSize;
	    std::vector<size_t> imageSizeReduce;
	    Array1D<size_t> imageSizeOutput;
	    Array1D<size_t> qxInd;
	    Array1D<size_t> qyInd;

	    T scale;
        T lambda;
        T dr;
        T dq;
	    T sigma;
	    T qMax;
	    T alphaMax;
        size_t Ndet;
        size_t numPlanes;
	    size_t numberBeams;
		Parameters(){};
	    Parameters(Metadata<T> _meta) : meta(_meta){

		    constexpr double m = 9.109383e-31;
		    constexpr double e = 1.602177e-19;
		    constexpr double c = 299792458;
		    constexpr double h = 6.62607e-34;
		    const double pi = std::acos(-1);
		    lambda = h / sqrt(2 * m * e * meta.E0) / sqrt(1 + e * meta.E0 / 2 / m / c / c) * 1e10;
		    sigma = (2 * pi / lambda / meta.E0) * (m * c * c + e * meta.E0) /
		                       (2 * m * c * c + e * meta.E0);

		    T f = 4 * meta.interpolationFactor;
		    Array1D<size_t> _imageSize({{meta.cellDim[1], meta.cellDim[2]}}, {{2}});
		    std::transform(_imageSize.begin(), _imageSize.end(), _imageSize.begin(),
		                   [&f, this](size_t &a) {
			                   return (size_t) (f * round(((T)a) / meta.realspace_pixelSize / f));
		                   });
		    this->imageSize = _imageSize;

		    std::vector<T> _pixelSize{(T) meta.cellDim[1], (T) meta.cellDim[2]};
		    pixelSize = _pixelSize;
		    pixelSize[0] /= (T)imageSize[0];
		    pixelSize[1] /= (T)imageSize[1];
		    try {
			    atoms = readAtoms(meta.filename_atoms);
		    }
		    catch (const std::runtime_error &e) {
			    std::cout << "PRISM: Error opening " << meta.filename_atoms << std::endl;
			    std::cout << e.what();
			    std::cout << "Terminating" << std::endl;
//			    return -1;
		    }
		    catch (const std::domain_error &e) {
			    std::cout << "PRISM: Error extracting atomic data from " << meta.filename_atoms << "!" << std::endl;
			    std::cout << e.what();
			    std::cout << "Terminating" << std::endl;
//			    return -2;
		    }

		    this->u = ones_ND<1,T>({{118}}) * 0.08;
//		    u = u;
		    std::cout << " prism_pars.pixelSize[1] = " << pixelSize[1] << std::endl;
		    std::cout << " prism_pars.pixelSize[0] = " << pixelSize[0] << std::endl;
	    };
    };


}
#endif //PRISM_PARAMS_H