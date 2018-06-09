/* made by EzioChiu.
 */

@protocol MiroEditorClipCollectionDataSource <NSObject>

@required

- (<MiroClip> *)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 clipAtIndex:(long long)arg2;
- (long long)clipCollectionClipCount:(UICollectionViewController<MiroEditorClipCollection> *)arg1;

@end
