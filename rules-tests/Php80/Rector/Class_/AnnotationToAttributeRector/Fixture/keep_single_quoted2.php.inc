<?php

namespace Rector\Tests\Php80\Rector\Class_\AnnotationToAttributeRector\Fixture;

use Rector\Tests\Php80\Rector\Class_\AnnotationToAttributeRector\Source\GenericSingleImplicitAnnotation;

/**
 * @GenericSingleImplicitAnnotation('"foo"')
 */
final class KeepSingleQuoted2
{
}

?>
-----
<?php

namespace Rector\Tests\Php80\Rector\Class_\AnnotationToAttributeRector\Fixture;

use Rector\Tests\Php80\Rector\Class_\AnnotationToAttributeRector\Source\GenericSingleImplicitAnnotation;

#[GenericSingleImplicitAnnotation('foo')]
final class KeepSingleQuoted2
{
}

?>
