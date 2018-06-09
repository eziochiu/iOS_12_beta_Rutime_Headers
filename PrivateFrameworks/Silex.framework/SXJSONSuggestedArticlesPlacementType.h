/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONSuggestedArticlesPlacementType : SXJSONObject <SXSuggestedArticlesPlacementType>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXAutoPlacementLayout> *layout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long theme;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

- (id)description;
- (unsigned long long)themeWithValue:(id)arg1 withType:(int)arg2;

@end
