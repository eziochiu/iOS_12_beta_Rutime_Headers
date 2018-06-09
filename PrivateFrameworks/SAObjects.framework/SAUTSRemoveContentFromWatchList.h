/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSRemoveContentFromWatchList : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *contentIdentifiers;

+ (id)removeContentFromWatchList;
+ (id)removeContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentIdentifiers;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContentIdentifiers:(id)arg1;

@end
