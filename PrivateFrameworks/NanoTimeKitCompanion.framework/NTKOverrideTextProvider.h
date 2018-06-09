/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKOverrideTextProvider : CLKTextProvider {
    id /* block */  _overrideBlock;
    NSString * _text;
}

@property (nonatomic, copy) id /* block */ overrideBlock;
@property (nonatomic, copy) NSString *text;

+ (id)_dashTrackingTextProviderWithDashes:(id)arg1 tracking:(double)arg2;
+ (id)_dashTrackingTextProviderWithDashes:(id)arg1 tracking:(double)arg2 weight:(double)arg3;
+ (id)textProviderWithText:(id)arg1 overrideBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id /* block */)overrideBlock;
- (void)setOverrideBlock:(id /* block */)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
