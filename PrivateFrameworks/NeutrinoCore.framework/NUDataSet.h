/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUDataSet : NSObject <NSCopying, NSMutableCopying> {
    struct DataSet { 
        struct vector<double, std::__1::allocator<double> > { 
            double *__begin_; 
            double *__end_; 
            struct __compressed_pair<double *, std::__1::allocator<double> > { 
                double *__value_; 
            } __end_cap_; 
        } _values; 
    }  _data;
    struct { 
        unsigned int sum : 1; 
        unsigned int min : 1; 
        unsigned int max : 1; 
        unsigned int mean : 1; 
        unsigned int geomean : 1; 
        unsigned int median : 1; 
        unsigned int variance : 1; 
        unsigned int stddev : 1; 
        unsigned int stderr : 1; 
        unsigned int ci95 : 1; 
        unsigned int cv : 1; 
        unsigned int mad : 1; 
    }  _flags;
    struct { 
        double sum; 
        double min; 
        double max; 
        double mean; 
        double geomean; 
        double median; 
        double variance; 
        double stddev; 
        double stderr; 
        double ci95; 
        double cv; 
        double mad; 
    }  _stats;
}

@property (nonatomic, readonly) double coefficientOfVariation;
@property (nonatomic, readonly) double confidenceInterval95;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) double estimatedCoefficientOfVariation;
@property (nonatomic, readonly) double estimatedConfidenceInterval95;
@property (nonatomic, readonly) double estimatedStandardDeviation;
@property (nonatomic, readonly) double estimatedStandardError;
@property (nonatomic, readonly) double geometricMean;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double mean;
@property (nonatomic, readonly) double median;
@property (nonatomic, readonly) double medianAbsoluteDeviation;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double standardDeviation;
@property (nonatomic, readonly) double standardError;
@property (nonatomic, readonly) double sum;
@property (nonatomic, readonly) double variance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct DataSet { struct vector<double, std::__1::allocator<double> > { double *x_1_1_1; double *x_1_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_1_1_3; } x1; }*)_const_data;
- (void)_resetStats;
- (double)coefficientOfVariation;
- (double)confidenceInterval95;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (void)enumerateValues:(id /* block */)arg1;
- (double)estimatedCoefficientOfVariation;
- (double)estimatedConfidenceInterval95;
- (double)estimatedStandardDeviation;
- (double)estimatedStandardError;
- (id)filter:(id /* block */)arg1;
- (double)geometricMean;
- (id)init;
- (id)initWithDataSet:(id)arg1;
- (id)initWithValue:(double)arg1;
- (id)initWithValues:(const double*)arg1 count:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDataSet:(id)arg1;
- (id)map:(id /* block */)arg1;
- (double)max;
- (double)mean;
- (double)median;
- (double)medianAbsoluteDeviation;
- (double)min;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)percentile:(double)arg1;
- (double)standardDeviation;
- (double)standardError;
- (double)sum;
- (double)valueAtIndex:(long long)arg1;
- (double)variance;

@end
