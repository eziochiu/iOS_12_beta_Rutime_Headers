/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
 */

@interface _EAEmailAddressSetEnumerator : NSEnumerator {
    EAEmailAddressSet * _set;
    /* Warning: unhandled struct encoding: '{?="state"Q"itemsPtr"^@"mutationsPtr"^Q"extra"[5Q]}' */ struct { 
        unsigned long long state; 
        mutationsPtr **itemsPtr; 
    }  _state;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithSet:(id)arg1;
- (id)nextObject;

@end
