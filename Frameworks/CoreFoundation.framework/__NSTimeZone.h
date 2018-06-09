/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSTimeZone : NSTimeZone {
    struct __CFData { } * _data;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    struct __CFString { } * _name;
    void ** _ucal;
}

+ (id)__new:(struct __CFString { }*)arg1 cache:(bool)arg2;
+ (id)__new:(struct __CFString { }*)arg1 data:(struct __CFData { }*)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)abbreviationForDate:(id)arg1;
- (id)data;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (void)dealloc;
- (bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (long long)secondsFromGMTForDate:(id)arg1;

@end
