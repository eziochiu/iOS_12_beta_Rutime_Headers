/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLActivityPickerCellLayoutCache : NSObject {
    NSMutableDictionary * _iconSizeCache;
    NSMutableDictionary * _sizeCache;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })cachedIconImageSizeForString:(id)arg1;
- (struct CGSize { double x1; double x2; })cachedSizeForString:(id)arg1;
- (bool)hasCachedSizeForString:(id)arg1;
- (id)init;
- (void)setCachedIconImageSize:(struct CGSize { double x1; double x2; })arg1 forString:(id)arg2;
- (void)setCachedSize:(struct CGSize { double x1; double x2; })arg1 forString:(id)arg2;

@end
