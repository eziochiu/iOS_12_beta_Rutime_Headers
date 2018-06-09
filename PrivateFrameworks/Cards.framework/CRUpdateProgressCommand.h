/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRUpdateProgressCommand : NSObject <CRCommand> {
    unsigned long long  _event;
    NSProgress * _progress;
    unsigned long long  commandDirection;
    NSDictionary * userInfo;
}

@property (nonatomic) unsigned long long commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long event;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (unsigned long long)commandDirection;
- (unsigned long long)event;
- (id)progress;
- (void)setCommandDirection:(unsigned long long)arg1;
- (void)setEvent:(unsigned long long)arg1;
- (void)setProgress:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
