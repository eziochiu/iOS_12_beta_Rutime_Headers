/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVFileProcessor : NSObject {
    float  _percentComplete;
}

+ (id)fileProcessor;

- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 progressBlock:(id /* block */)arg4;
- (id)rentalInfo:(id)arg1;
- (id)sinfInfoFromFilePath:(id)arg1;
- (id)sinfsFromFilePath:(id)arg1;

@end
