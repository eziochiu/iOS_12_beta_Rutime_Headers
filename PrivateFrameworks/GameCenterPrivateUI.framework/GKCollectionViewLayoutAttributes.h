/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    bool  _allSectionItemsVisible;
    unsigned long long  _currentTotalItemCount;
    unsigned long long  _currentVisibleItemCount;
    <UICollectionViewDataSource> * _dataSource;
    bool  _doesAbutLeftOfCollectionView;
    unsigned long long  _gridLayoutLocation;
    bool  _isPartOfGlobalPinningGroup;
    bool  _isPinned;
    double  _leadingMargin;
    unsigned long long  _maxTotalItemCount;
    GKSectionMetrics * _sectionMetrics;
    GKSupplementaryViewMetrics * _supplementaryMetrics;
    double  _trailingMargin;
    double  _unpinnedY;
}

@property (nonatomic) bool allSectionItemsVisible;
@property (nonatomic) unsigned long long currentTotalItemCount;
@property (nonatomic) unsigned long long currentVisibleItemCount;
@property (nonatomic, retain) <UICollectionViewDataSource> *dataSource;
@property (nonatomic) bool doesAbutLeftOfCollectionView;
@property (nonatomic) unsigned long long gridLayoutLocation;
@property (nonatomic) bool isPartOfGlobalPinningGroup;
@property (nonatomic) bool isPinned;
@property (nonatomic) double leadingMargin;
@property (nonatomic) unsigned long long maxTotalItemCount;
@property (nonatomic, retain) GKSectionMetrics *sectionMetrics;
@property (nonatomic, retain) GKSupplementaryViewMetrics *supplementaryMetrics;
@property (nonatomic) double trailingMargin;
@property (nonatomic) double unpinnedY;

- (bool)allSectionItemsVisible;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentTotalItemCount;
- (unsigned long long)currentVisibleItemCount;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (bool)doesAbutLeftOfCollectionView;
- (unsigned long long)gridLayoutLocation;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isPartOfGlobalPinningGroup;
- (bool)isPinned;
- (double)leadingMargin;
- (unsigned long long)maxTotalItemCount;
- (id)sectionMetrics;
- (void)setAllSectionItemsVisible:(bool)arg1;
- (void)setCurrentTotalItemCount:(unsigned long long)arg1;
- (void)setCurrentVisibleItemCount:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDoesAbutLeftOfCollectionView:(bool)arg1;
- (void)setGridLayoutLocation:(unsigned long long)arg1;
- (void)setIsPartOfGlobalPinningGroup:(bool)arg1;
- (void)setIsPinned:(bool)arg1;
- (void)setLeadingMargin:(double)arg1;
- (void)setMaxTotalItemCount:(unsigned long long)arg1;
- (void)setSectionMetrics:(id)arg1;
- (void)setSupplementaryMetrics:(id)arg1;
- (void)setTrailingMargin:(double)arg1;
- (void)setUnpinnedY:(double)arg1;
- (id)supplementaryMetrics;
- (double)trailingMargin;
- (double)unpinnedY;

@end
