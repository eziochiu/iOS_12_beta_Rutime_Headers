/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDEventBehaviorResolutionService : NSObject {
    NSString * _clientIdentifier;
}

+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1;
- (id)resolveBehaviorForEventDetails:(id)arg1 error:(id*)arg2;

@end
