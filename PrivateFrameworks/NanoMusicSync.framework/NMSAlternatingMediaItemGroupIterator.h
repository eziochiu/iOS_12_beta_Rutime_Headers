/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSAlternatingMediaItemGroupIterator : NMSMediaItemGroupIterator {
    unsigned long long  _maxItemListSize;
}

- (void)_continueToNextIdentifier;
- (void)_generateItemListAndSizesDictIfNecessary;
- (void)_resetMaxItemListSize;
- (unsigned long long)iteratingOrder;
- (void)resetToIterateOverQuotaIdentifiers;

@end
