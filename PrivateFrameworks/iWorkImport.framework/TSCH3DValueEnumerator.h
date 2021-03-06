/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DValueEnumerator : NSObject {
    struct ValueEnumerator { 
        bool mForward; 
        unsigned long long mIndex; 
        unsigned long long mMax; 
        double mValue; 
    }  mImp;
}

@property (nonatomic, readonly) double value;

- (id).cxx_construct;
- (id)enumerator;
- (unsigned long long)index;
- (bool)isValid;
- (bool)isValidNonZero;
- (id)nextObject;
- (void)setValue:(double)arg1;
- (double)value;

@end
