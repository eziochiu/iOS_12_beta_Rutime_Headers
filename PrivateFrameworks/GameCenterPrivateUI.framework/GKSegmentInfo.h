/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSegmentInfo : NSObject <_GKStateMachineDelegate> {
    GKCollectionViewDataSource * _dataSource;
    <GKSegmentInfoDelegagte> * _delegateWeak;
    GKPlaceholderContentStateMachine * _loadingMatchine;
    NSString * _title;
}

@property (nonatomic, retain) GKCollectionViewDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GKSegmentInfoDelegagte> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GKPlaceholderContentStateMachine *loadingMatchine;
@property (nonatomic, retain) NSString *loadingState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didEnterErrorState;
- (void)didEnterLoadingState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;
- (id)initWithDataSource:(id)arg1;
- (id)loadingMatchine;
- (id)loadingState;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingMatchine:(id)arg1;
- (void)setLoadingState:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end