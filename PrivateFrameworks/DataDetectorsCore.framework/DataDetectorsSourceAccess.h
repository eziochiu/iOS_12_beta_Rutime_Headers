/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DataDetectorsSourceAccess : NSObject <DataDetectorsSourceAccessProtocol> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    int  _clientpid;
    unsigned int  _clientuid;
    bool  _privacySystemWriteEntitled;
    long long  _privacySystemWriteEntitlementChecked;
    bool  _privacyUserReadEntitled;
    long long  _privacyUserReadEntitlementChecked;
    bool  _privacyUserWriteEntitled;
    long long  _privacyUserWriteEntitlementChecked;
}

@property struct { unsigned int x1[8]; } auditToken;
@property int processIdentifier;
@property unsigned int userIdentifier;

- (struct { unsigned int x1[8]; })auditToken;
- (bool)clientCanWriteSource:(int)arg1;
- (void)fileForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(id /* block */)arg3;
- (id)fileHandleForSourceRead:(int)arg1 resourceType:(unsigned long long)arg2;
- (void)filesForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(id /* block */)arg3;
- (bool)privacySystemWriteEntitled;
- (bool)privacyUserReadEntitled;
- (bool)privacyUserWriteEntitled;
- (int)processIdentifier;
- (bool)pushSourcesContent:(id)arg1 forSource:(int)arg2 signature:(id)arg3;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setProcessIdentifier:(int)arg1;
- (void)setUserIdentifier:(unsigned int)arg1;
- (unsigned int)userIdentifier;
- (void)writeSourceFromJSONFile:(id)arg1 source:(id)arg2 withReply:(id /* block */)arg3;
- (void)writeSourceFromRawData:(id)arg1 source:(id)arg2 signature:(id)arg3 withReply:(id /* block */)arg4;

@end
