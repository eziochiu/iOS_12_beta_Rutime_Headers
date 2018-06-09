/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBulletinStore : NSObject {
    <WLKBulletinStoreDelegate> * _delegate;
}

@property (nonatomic) <WLKBulletinStoreDelegate> *delegate;

- (void).cxx_destruct;
- (id)_path;
- (id)_readBulletins;
- (id)_readData;
- (id)_readPlist;
- (void)_writeBulletins:(id)arg1;
- (void)_writeData:(id)arg1;
- (void)_writePlist:(id)arg1;
- (void)addBulletin:(id)arg1;
- (id)bulletinEnumerator;
- (id)delegate;
- (void)removeAllBulletins;
- (void)removeBulletinsWithCoalescingIDs:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
