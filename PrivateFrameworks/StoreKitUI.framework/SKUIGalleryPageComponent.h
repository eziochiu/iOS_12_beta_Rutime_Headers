/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGalleryPageComponent : SKUIPageComponent {
    NSArray * _childComponents;
    double  _cycleInterval;
    bool  _hidesPageIndicator;
}

@property (nonatomic, readonly) NSArray *childComponents;
@property (nonatomic) double cycleInterval;
@property (nonatomic) bool hidesPageIndicator;

- (void).cxx_destruct;
- (id)childComponents;
- (long long)componentType;
- (double)cycleInterval;
- (bool)hidesPageIndicator;
- (id)initWithCustomPageContext:(id)arg1;
- (id)metricsElementName;
- (void)setCycleInterval:(double)arg1;
- (void)setHidesPageIndicator:(bool)arg1;

@end
