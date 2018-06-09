/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStyleDiff : TSSStyleDiff {
    TSSStylePropertyChangeSet * _changeSet;
    bool  _definedChangeSet;
    bool  _definedStyle;
    TSSStylePropertyChangeSet * _previouslyAppliedChangeSet;
    TSSStyle * _style;
}

@property (nonatomic, retain) TSSStylePropertyChangeSet *changeSet;
@property (nonatomic, retain) TSSStylePropertyChangeSet *previouslyAppliedChangeSet;
@property (nonatomic, retain) TSSStyle *style;

- (void).cxx_destruct;
- (id)changeSet;
- (id)changedPropertyNames:(id)arg1;
- (id)description;
- (void)didInitFromSOS;
- (unsigned long long)hash;
- (id)initWithContext:(id)arg1 changeSet:(id)arg2;
- (id)initWithContext:(id)arg1 style:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStyleDiff:(id)arg1;
- (void)loadFromArchive:(const struct StyleDiffArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct CharacterStylePropertyChangeSetArchive {} *x6; struct ParagraphStylePropertyChangeSetArchive {} *x7; struct ShapeStylePropertyChangeSetArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)previouslyAppliedChangeSet;
- (void)saveToArchive:(struct StyleDiffArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct CharacterStylePropertyChangeSetArchive {} *x6; struct ParagraphStylePropertyChangeSetArchive {} *x7; struct ShapeStylePropertyChangeSetArchive {} *x8; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setChangeSet:(id)arg1;
- (void)setPreviouslyAppliedChangeSet:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)styleDiffForTable:(int)arg1 storage:(id)arg2 currentObject:(id)arg3;

@end
