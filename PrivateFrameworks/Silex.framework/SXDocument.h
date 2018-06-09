/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDocument : SXJSONObject

@property (nonatomic, readonly) <SXAdvertisingSettings> *advertisingSettings;
@property (nonatomic, readonly) SXJSONArray *allComponents;
@property (nonatomic, readonly) <SXAutoPlacement> *autoplacement;
@property (nonatomic, readonly) SXJSONDictionary *componentLayouts;
@property (nonatomic, readonly) SXJSONDictionary *componentStyles;
@property (nonatomic, readonly) SXJSONDictionary *componentTextStyles;
@property (nonatomic, readonly) SXJSONArray *components;
@property (nonatomic, readonly) SXDocumentStyle *documentStyle;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) SXDocumentLayout *layout;
@property (nonatomic, readonly) SXMetaData *metadata;
@property (nonatomic, readonly) SXJSONDictionary *resources;
@property (nonatomic, readonly) NSString *specVersion;
@property (nonatomic, readonly) SXJSONDictionary *tableStyles;
@property (nonatomic, readonly) SXJSONDictionary *textStyles;
@property (nonatomic, readonly) NSString *title;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (id /* block */)objectValueClassBlockForPropertyWithName:(id)arg1;
+ (id /* block */)purgeClassBlockForPropertyWithName:(id)arg1;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

@end
