/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCMessageContext : NSObject {
    NSObject<OS_dispatch_queue> * mMessageSyncQueue;
    NSMutableArray * m_currentObjectStack;
    NSMutableSet * m_errors;
    NSMutableDictionary * m_placeholderToObjectMap;
    NSMutableSet * m_warnings;
}

+ (void)createContextForCurrentThread;
+ (id)currentObjectOrPlaceholder;
+ (id)getErrorArray;
+ (id)getWarningArray;
+ (void)initialize;
+ (bool)isFileStructuredStorage;
+ (void)popCurrentObject;
+ (void)popCurrentPlaceholder:(id)arg1;
+ (void)pushCurrentObject:(id)arg1;
+ (id)pushCurrentPlaceholder;
+ (void)removeContextForCurrentThread;
+ (void)replacePlaceholdersWithObjects;
+ (void)reportError:(id)arg1;
+ (void)reportErrorException:(id)arg1;
+ (void)reportObject:(id)arg1 withWarning:(id)arg2;
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(id)arg2 parameters:(char *)arg3;
+ (void)reportWarning:(id)arg1;
+ (void)reportWarningException:(id)arg1;
+ (void)reportWarningsToDelegate;
+ (void)restoreObjectStack:(unsigned int)arg1;
+ (unsigned long long)saveObjectStack;
+ (void)setIsFileStructuredStorage:(bool)arg1;
+ (void)setObject:(id)arg1 forPlaceholder:(id)arg2;

- (void)addErrorMessageEntry:(id)arg1;
- (void)addWarningMessageEntry:(id)arg1;
- (id)currentObject;
- (void)dealloc;
- (id)init;
- (void)popObject;
- (void)popPlaceholder:(id)arg1;
- (void)pushObject:(id)arg1;
- (id)pushPlaceholder;
- (void)replacePlaceholdersWithObjects:(bool)arg1;
- (void)reportWarningForObject:(id)arg1 warning:(id)arg2 parameterList:(char *)arg3;
- (void)reportWarningsToDelegate;
- (void)setObject:(id)arg1 forPlaceholderKey:(id)arg2 dispatchSync:(bool)arg3;

@end