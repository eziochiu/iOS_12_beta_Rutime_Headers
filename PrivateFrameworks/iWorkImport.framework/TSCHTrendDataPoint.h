/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHTrendDataPoint : NSObject {
    double  mDataPointX;
    double  mDataPointY;
    unsigned long long  mGroupIndex;
}

- (double)dataPointX;
- (double)dataPointY;
- (unsigned long long)groupIndex;
- (id)initWithPointX:(double)arg1 pointY:(double)arg2 forGroup:(unsigned long long)arg3;
- (long long)xValueCompare:(id)arg1;

@end
