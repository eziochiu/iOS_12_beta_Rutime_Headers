/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMapSnapShotter : NSObject {
    NSMutableArray * _snapshotters;
}

@property (nonatomic, retain) NSMutableArray *snapshotters;

+ (id)serialQueue;

- (void).cxx_destruct;
- (id)init;
- (void)setSnapshotters:(id)arg1;
- (id /* block */)snapShotWithOptions:(id)arg1 annotations:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)snapshotters;

@end