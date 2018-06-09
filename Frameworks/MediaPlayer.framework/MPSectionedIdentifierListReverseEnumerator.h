/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSectionedIdentifierListReverseEnumerator : NSEnumerator {
    NSMutableArray * _contexts;
    NSMutableArray * _entriesToEmit;
    NSMutableArray * _nextEmittableEnumerationResults;
    unsigned long long  _options;
    MPSectionedIdentifierList * _sectionedIdentifierList;
    _MPSectionedIdentifierListProxyEntry * _startEntryProxy;
}

@property (nonatomic, retain) NSMutableArray *contexts;
@property (nonatomic, retain) NSMutableArray *entriesToEmit;
@property (nonatomic, retain) NSMutableArray *nextEmittableEnumerationResults;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) MPSectionedIdentifierList *sectionedIdentifierList;

- (void).cxx_destruct;
- (id)_initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingEntry:(id)arg3;
- (id)_startEntryProxy;
- (id)contexts;
- (id)entriesToEmit;
- (id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingAtItem:(id)arg3 inSection:(id)arg4;
- (id)nextEmittableEnumerationResults;
- (id)nextObject;
- (unsigned long long)options;
- (id)sectionedIdentifierList;
- (void)setContexts:(id)arg1;
- (void)setEntriesToEmit:(id)arg1;
- (void)setNextEmittableEnumerationResults:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
