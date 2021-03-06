/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventRouterManagerBase : NSObject {
    NSArray * _eventRouters;
}

@property (nonatomic, retain) NSArray *eventRouters;

- (void).cxx_destruct;
- (id)description;
- (id)eventRouters;
- (id)init;
- (long long)routerDestinationForDescriptor:(id)arg1;
- (void)setEventRouters:(id)arg1;

@end
