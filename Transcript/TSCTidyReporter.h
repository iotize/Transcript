//
//  TSCTidyReporter.h
//  Transcript
//
//  Created by Ryan Davies on 31/01/2013.
//  Copyright (c) 2013 Ryan Davies. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSCReporter.h"

@interface TSCTidyReporter : NSObject <TSCReporter>

- (void)log:(NSString *)message;

@end
