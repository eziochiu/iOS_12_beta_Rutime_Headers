/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
 */

@interface CRSIdentifiedServiceRegistry : NSObject {
    NSMutableOrderedSet * _identifiedServices;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)identifiedServices;
- (id)init;
- (void)registerIdentifiedService:(id)arg1 completion:(id /* block */)arg2;

@end
