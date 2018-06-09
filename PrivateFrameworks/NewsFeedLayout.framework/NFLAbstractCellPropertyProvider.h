/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLAbstractCellPropertyProvider : NSObject {
    NFLFontCache * _fontCache;
    NSString * _plistName;
    id * _propertiesByColumnSpan;
    Class  _propertyClass;
    double  _scaleValue;
    NSSet * _supportedColumnSpans;
    unsigned long long  propertiesByColumnSpanSize;
}

@property (nonatomic, readonly) NFLFontCache *fontCache;
@property (nonatomic, retain) NSString *plistName;
@property (nonatomic) Class propertyClass;
@property (nonatomic, readonly) double scaleValue;
@property (nonatomic, readonly) NSSet *supportedColumnSpans;

+ (id)publisherTitleFontLarge;
+ (id)publisherTitleFontSmall;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fontCache;
- (id)init;
- (id)initWithScaleValue:(double)arg1 preferredContentSizeCategory:(id)arg2 fontCache:(id)arg3 plistName:(id)arg4 propertyClass:(Class)arg5;
- (id)plistName;
- (id)propertiesForColumnSpan:(long long)arg1;
- (id)propertiesIrrespectiveToColumnSpan;
- (Class)propertyClass;
- (double)scaleValue;
- (void)setPlistName:(id)arg1;
- (void)setPropertyClass:(Class)arg1;
- (id)supportedColumnSpans;

@end
