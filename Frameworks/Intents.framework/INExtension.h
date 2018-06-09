/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INExtension : NSObject <INApplicationContextProviding, INIntentHandlerProviding, NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)currentApplicationContext;
- (id)handlerForIntent:(id)arg1;

@end
