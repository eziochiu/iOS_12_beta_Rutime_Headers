/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTMergeableUndoString : TTMergeableString

- (void)addUndoCommand:(id)arg1;
- (void)applyUndoCommand:(id)arg1;
- (void)deleteSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 withCharacterRanges:(struct vector<_NSRange, std::__1::allocator<_NSRange> > { }*)arg2;
- (struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })insertAttributedString:(id)arg1 after:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg2 before:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg3;
- (void)undeleteSubstrings:(struct vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > > { struct pair<TopoIDRange, NSAttributedString *> {} *x1; struct pair<TopoIDRange, NSAttributedString *> {} *x2; struct __compressed_pair<std::__1::pair<TopoIDRange, NSAttributedString *> *, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > > { struct pair<TopoIDRange, NSAttributedString *> {} *x_3_1_1; } x3; }*)arg1;

@end
