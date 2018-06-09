/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFAssertionInfo : NSObject {
    NSArray * _backtrace;
    NSString * _fileName;
    NSString * _functionName;
    bool  _isClassMethod;
    bool  _isFatal;
    unsigned long long  _lineNumber;
    NSString * _message;
    Class  _objectClass;
    SEL  _selector;
}

@property (retain) NSArray *backtrace;
@property (retain) NSString *fileName;
@property (retain) NSString *functionName;
@property bool isClassMethod;
@property bool isFatal;
@property unsigned long long lineNumber;
@property (retain) NSString *message;
@property (retain) Class objectClass;
@property SEL selector;

- (void).cxx_destruct;
- (id)backtrace;
- (id)description;
- (id)fileName;
- (id)functionName;
- (bool)isClassMethod;
- (bool)isFatal;
- (bool)isWarning;
- (unsigned long long)lineNumber;
- (id)message;
- (Class)objectClass;
- (id)prettyMethodName;
- (SEL)selector;
- (void)setBacktrace:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setIsClassMethod:(bool)arg1;
- (void)setIsFatal:(bool)arg1;
- (void)setLineNumber:(unsigned long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setObjectClass:(Class)arg1;
- (void)setSelector:(SEL)arg1;

@end
