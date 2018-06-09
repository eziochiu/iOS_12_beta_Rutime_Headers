/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    long long  _countOfItems;
}

@property (nonatomic) long long countOfItems;

- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)arg1;
- (long long)countOfItems;
- (id)date;
- (id)init;
- (bool)isLoaded;
- (long long)numberOfItems;
- (long long)sectionType;
- (void)setCountOfItems:(long long)arg1;

@end