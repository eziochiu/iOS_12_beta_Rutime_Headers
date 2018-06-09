/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicGroup : NSObject {
    NSSet * _characteristicTypes;
    NSString * _identifier;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSSet *characteristicTypes;
@property (nonatomic, readonly) long long groupSortPriority;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)_currentTargetStateCharacteristicTypeMap;
+ (id)_targetCurrentStateCharacteristicGroups;
+ (id)_targetCurrentStateCharacteristicTypeMap;
+ (id)allCharacteristicGroups;
+ (id)characteristicGroupForCharacteristicType:(id)arg1;
+ (id)characteristicGroupForIdentifier:(id)arg1;
+ (id)groupedTitleForCharacteristicType:(id)arg1;

- (void).cxx_destruct;
- (id)characteristicTypes;
- (long long)groupSortPriority;
- (id)identifier;
- (id)init;
- (id)initWithID:(id)arg1 title:(id)arg2 characteristicTypes:(id)arg3;
- (id)title;

@end
