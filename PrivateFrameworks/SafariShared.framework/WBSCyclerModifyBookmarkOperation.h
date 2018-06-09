/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerModifyBookmarkOperation : NSObject <WBSCyclerBookmarkOperation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_changeTitleOfBookmark:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_changeURLOfBookmark:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)executeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end
