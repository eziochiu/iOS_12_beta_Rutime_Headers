/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUUserActivityContainerItem : NSObject <NSCopying, NSMutableCopying> {
    long long  _containerItemType;
    MPMediaEntity * _selectedMediaEntity;
    MPMediaEntity * _visualReferenceMediaEntity;
}

@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_selectedContentItemIdentifierCollection;
@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_visualReferenceContentItemIdentifierCollection;
@property (nonatomic, readonly) long long containerItemType;
@property (nonatomic, readonly) _MPUProtoBufUserActivityContainerItem *protoBufUserActivityContainerItem;
@property (nonatomic, readonly) MPMediaEntity *selectedMediaEntity;
@property (nonatomic, readonly) MPMediaEntity *visualReferenceMediaEntity;

- (void).cxx_destruct;
- (id)MPU_selectedContentItemIdentifierCollection;
- (id)MPU_visualReferenceContentItemIdentifierCollection;
- (id)_MPU_contentItemIdentifierCollectionWithMediaEntity:(id)arg1;
- (long long)containerItemType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContainerItemType:(long long)arg1;
- (id)initWithProtoBufUserActivityContainerItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)protoBufUserActivityContainerItem;
- (id)selectedMediaEntity;
- (id)visualReferenceMediaEntity;

@end
