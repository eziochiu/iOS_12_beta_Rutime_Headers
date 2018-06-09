/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject {
    /* Warning: unhandled struct encoding: '{TSCEASTNodeArray=*QQ@}' */ struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; } * mAST;
    struct { 
        unsigned int formulaID : 24; 
    }  mFormulaID;
}

- (/* Warning: unhandled struct encoding: '{TSCEASTNodeArray=*QQ@}' */ struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; }*)ast;
- (void)dealloc;
- (void)encodeToArchive:(struct TrackedReferenceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ASTNodeArrayArchive {} *x5; unsigned int x6; }*)arg1;
- (struct { unsigned int x1 : 24; })formulaID;
- (void)saveToArchiver:(id)arg1;
- (bool)validatedLoadFromUnarchiver:(id)arg1;

@end
