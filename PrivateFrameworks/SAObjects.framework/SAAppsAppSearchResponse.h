/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppsAppSearchResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *foundApps;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)appSearchResponse;
+ (id)appSearchResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)foundApps;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setFoundApps:(id)arg1;

@end
