/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPreparedStatement : NSObject <NSCopying, NSDiscardableContent> {
    bool  _isFinalized;
    SGSqliteDatabase * _owner;
    struct sqlite3_stmt { } * _stmt;
    unsigned int  _useCount;
}

@property (nonatomic, readonly) struct sqlite3_stmt { }*stmt;

- (void).cxx_destruct;
- (void)_finalizeWithLogWarning:(id)arg1;
- (bool)beginContentAccess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (id)initWithStatementPointer:(struct sqlite3_stmt { }*)arg1 owner:(id)arg2;
- (bool)isContentDiscarded;
- (struct sqlite3_stmt { }*)stmt;

@end
