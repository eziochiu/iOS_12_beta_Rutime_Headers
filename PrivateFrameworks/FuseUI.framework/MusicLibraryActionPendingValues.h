/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryActionPendingValues : NSObject {
    bool  _hasPendingKeepLocalValue;
    bool  _hasPendingLibraryState;
    long long  _pendingKeepLocalValue;
    unsigned long long  _pendingLibraryState;
}

@property (nonatomic) bool hasPendingKeepLocalValue;
@property (nonatomic) bool hasPendingLibraryState;
@property (nonatomic) long long pendingKeepLocalValue;
@property (nonatomic) unsigned long long pendingLibraryState;

- (bool)hasPendingKeepLocalValue;
- (bool)hasPendingLibraryState;
- (long long)pendingKeepLocalValue;
- (unsigned long long)pendingLibraryState;
- (void)setHasPendingKeepLocalValue:(bool)arg1;
- (void)setHasPendingLibraryState:(bool)arg1;
- (void)setPendingKeepLocalValue:(long long)arg1;
- (void)setPendingLibraryState:(unsigned long long)arg1;

@end
