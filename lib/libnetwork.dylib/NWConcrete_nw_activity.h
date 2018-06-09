/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_activity : NSObject <OS_nw_activity> {
    struct atomic_flag { 
        bool _Value; 
    }  activated;
    struct atomic_flag { 
        bool _Value; 
    }  completed;
    int  completion_reason;
    unsigned int  domain;
    unsigned long long  end_time;
    unsigned long long  investigation_identifier;
    unsigned int  is_lightweight;
    unsigned int  is_retry;
    unsigned int  label;
    NWConcrete_nw_activity * parent;
    int  reporting_strategy;
    unsigned long long  start_time;
    unsigned char  token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithDomain:(unsigned int)arg1 label:(unsigned int)arg2;
- (id)initWithOriginal:(id)arg1;
- (id)initWithToken:(unsigned char)arg1;

@end
