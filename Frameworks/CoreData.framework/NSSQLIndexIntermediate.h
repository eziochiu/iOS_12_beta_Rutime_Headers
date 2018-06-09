/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLIndexIntermediate : NSSQLIntermediate {
    NSSQLBinaryIndex * _index;
    bool  _isHandlingExpressions;
}

- (id)_generateSQLForExpressionDescription:(id)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)governingEntity;
- (id)initForIndex:(id)arg1 withScope:(id)arg2;
- (bool)isIndexExpressionScoped;
- (bool)isIndexScoped;

@end