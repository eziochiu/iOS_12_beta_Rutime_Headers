/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGXpcTransaction : NSObject {
    struct atomic_flag { 
        bool _Value; 
    }  _done;
    NSObject<OS_os_transaction> * _transaction;
}

+ (id)transactionWithName:(const void*)arg1;

- (void).cxx_destruct;
- (void)done;
- (id)init;
- (id)initWithName:(const void*)arg1;
- (void)setTimeout:(double)arg1;

@end
