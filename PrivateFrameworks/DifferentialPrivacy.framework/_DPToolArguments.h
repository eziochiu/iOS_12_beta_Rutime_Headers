/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPToolArguments : NSObject {
    NSString * _arguments;
    NSString * _command;
    NSString * _databasePath;
    NSString * _recordKey;
    bool  _verbose;
    bool  _writeOK;
}

@property (nonatomic, readonly, copy) NSString *arguments;
@property (nonatomic, readonly, copy) NSString *command;
@property (nonatomic, readonly, copy) NSString *databasePath;
@property (nonatomic, readonly, copy) NSString *recordKey;
@property (nonatomic, readonly) bool verbose;
@property (nonatomic, readonly) bool writeOK;

+ (id)usage;

- (void).cxx_destruct;
- (id)arguments;
- (id)command;
- (id)databasePath;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)job;
- (id)recordKey;
- (bool)verbose;
- (bool)writeOK;

@end
