/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASArgSubcommand : NSObject {
    id /* block */  _handler;
    NSString * _helpDescription;
    NSString * _name;
    NSMutableArray * _registeredOptions;
}

@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly, copy) NSString *helpDescription;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) NSMutableArray *registeredOptions;

+ (id)simpleSubcommandWithHelpGenerator:(id /* block */)arg1 name:(id)arg2 help:(id)arg3 handler:(id /* block */)arg4;
+ (id)subcommandWithName:(id)arg1 help:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)handler;
- (id)helpDescription;
- (id)initWithName:(id)arg1 help:(id)arg2 handler:(id /* block */)arg3;
- (id)naiveUsageHelpWithPositionalArgString:(id)arg1;
- (id)name;
- (id)optionLongHelp;
- (id)optionShortHelp;
- (void)registerOption:(id)arg1;
- (id)registeredOptions;
- (void)setRegisteredOptions:(id)arg1;

@end