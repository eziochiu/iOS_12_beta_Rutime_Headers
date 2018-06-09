/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLProbabilityDictionary : NSMutableDictionary {
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__value_; 
        } __end_cap_; 
    }  _values;
}

+ (id)probabilityDictionaryForLabels:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classLabelOfMaxProbability:(id)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)replaceDoubleVectorWith:(double*)arg1;

@end
