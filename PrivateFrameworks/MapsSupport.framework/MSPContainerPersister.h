/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPContainerPersister : NSObject {
    <MSPContainerPersisterDelegate> * _delegate;
    long long  _duplicatesPolicy;
}

@property (nonatomic) <MSPContainerPersisterDelegate> *delegate;
@property (nonatomic, readonly) long long duplicatesPolicy;

- (void).cxx_destruct;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(id /* block */)arg4;
- (id)delegate;
- (long long)duplicatesPolicy;
- (void)eraseWithCompletion:(id /* block */)arg1;
- (void)fetchStateSnapshotWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
