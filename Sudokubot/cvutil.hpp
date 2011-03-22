//
//  cvutil.h
//  Sudokubot
//
//  Created by Haoest on 3/10/11.
//  Copyright 2011 none. All rights reserved.
//

#import <opencv2/core/core.hpp>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


@interface cvutil :NSObject {

}
+(IplImage *) CreateIplImageFromUIImage: (UIImage*) image;
+(UIImage*) CreateUIImageFromIplImage: (IplImage*) image;
+(IplImage*) LoadPbmAsIplImage: (NSString*) fileName;

@end
