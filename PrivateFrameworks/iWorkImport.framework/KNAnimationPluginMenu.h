/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationPluginMenu : NSObject {
    unsigned long long  _defaultDirection;
    NSMutableDictionary * _directionToLocalizedStringMap;
    NSMutableArray * _directions;
    NSMutableArray * _localizedDirections;
    NSMutableDictionary * _localizedStringToDirectionMap;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) unsigned long long defaultDirection;
@property (nonatomic, readonly) NSArray *directions;
@property (nonatomic, readonly) NSArray *localizedDirections;

+ (id)animationPluginMenu;
+ (id)localizedStringForDirection:(unsigned long long)arg1 shortVersion:(bool)arg2;

- (void).cxx_destruct;
- (void)addDirection:(unsigned long long)arg1 localizedMenuString:(id)arg2;
- (void)addDirection:(unsigned long long)arg1 useShortString:(bool)arg2;
- (bool)containsDirection:(unsigned long long)arg1;
- (unsigned long long)count;
- (unsigned long long)defaultDirection;
- (unsigned long long)directionForIndex:(unsigned long long)arg1;
- (id)directions;
- (unsigned long long)indexForDirection:(unsigned long long)arg1;
- (id)init;
- (id)localizedDirections;
- (void)setDefaultDirection:(unsigned long long)arg1;

@end
