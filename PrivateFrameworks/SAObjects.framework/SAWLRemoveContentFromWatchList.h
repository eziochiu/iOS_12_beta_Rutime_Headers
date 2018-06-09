/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWLRemoveContentFromWatchList : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *canonicalId;
@property (nonatomic, copy) NSString *siriLocale;
@property (nonatomic, copy) NSString *title;

+ (id)removeContentFromWatchList;
+ (id)removeContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2;

- (id)canonicalId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCanonicalId:(id)arg1;
- (void)setSiriLocale:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)siriLocale;
- (id)title;

@end
