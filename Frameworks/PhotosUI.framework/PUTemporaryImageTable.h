/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTemporaryImageTable : PLTemporaryImageTable {
    int  _indexCounter;
}

- (int)nextCacheIndex;

@end
