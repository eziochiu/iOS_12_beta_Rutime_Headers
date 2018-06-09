/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMOutlineState : NSObject {
    NSMutableArray * _counters;
    WDList * _currentList;
    WDListDefinition * _listDefinition;
}

@property (retain) WDList *currentList;
@property (readonly) WDListDefinition *listDefinition;

- (void).cxx_destruct;
- (unsigned long long)counterAtLevel:(unsigned char)arg1;
- (id)currentList;
- (void)increaseCounterAtLevel:(unsigned char)arg1;
- (id)init;
- (id)initWithListDefinition:(id)arg1;
- (unsigned long long)levelCount;
- (id)levelDescriptionAtIndex:(unsigned char)arg1;
- (id)listDefinition;
- (void)reset;
- (void)setCounterTo:(unsigned long long)arg1 atLevel:(unsigned char)arg2;
- (void)setCurrentList:(id)arg1;

@end
