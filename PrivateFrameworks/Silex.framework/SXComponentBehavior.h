/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentBehavior : SXJSONObject <SXClassFactoryProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

+ (void)initializeObject;
+ (id)typeString;

- (Class)handlerClassForComponent:(id)arg1;

@end
